from Plotting_tools import *

pdf = matplotlib.backends.backend_pdf.PdfPages("Wavefunction_Plots.pdf")

#Creating Axes
Xs = np.linspace(-i3,i3,501)
Ys = np.linspace(0,1,501)
levels = np.linspace(-11, 1, 100)
#Pots = ['AV8','N2LO','G3','AV4']
Pots = ['AV8']
Zs=[4,5,6,7,8,9,10,11,12,13,14,15]
mycolors = ['blue','aqua','black','yellowgreen','red','red','red']

pt=r'$p$'
nt=r'$n$'

for Pot in Pots:
    fig, ax = plt.subplots()
    ax_circ = plt.axes([0,0,1,1])
    ax_circ.axis('off')
    ax_circ.set_xlim(0,1)
    ax_circ.set_ylim(0,1)
    ax.set_ylabel(r'$log(|\phi^{2}|)$')
    ax.set_xlabel(r'$p_{Tot} [GeV]$')
    ax.set_xlim(0.5,3.0)
    ax.set_ylim(-9,3)
    ct=0.025
    plot_conf_2N(ax_circ,0.3,0.8,"black",ct,pt,nt)
    plot_conf_2N(ax_circ,0.35,0.7,"blue",ct,pt,pt)
    plot_conf(ax_circ,0.5,0.38,0.5000,0.2500,"aqua",ct,pt,nt,pt)
    plot_conf(ax_circ,0.37,0.50,0.5000,0.2500,"yellowgreen",ct,nt,pt,pt)
    plot_conf(ax_circ,0.25,0.25,0.3333,0.3333,"red",ct,pt,pt,nt)
    for i in (1,2,3,4,7):
        wf_array = np.loadtxt('Wavefunction_Arrays/'+ Pot +'_Arrays/OneDim_3N_pp_'+ str(i) +'_ptot.txt')
        ax.plot(wf_array[:,0],np.log10(wf_array[:,1]),color=mycolors[i-1])
    pdf.savefig(fig)

    fig, ax = plt.subplots()
    ax.set_xlim(0.3,1.0)
    ax.set_ylim(-9,3)
    for i in (1,2,3,4,7):
        wf_array = np.loadtxt('Wavefunction_Arrays/'+ Pot +'_Arrays/OneDim_3N_pp_'+ str(i) +'_pmiss.txt')
        ax.plot(wf_array[:,0],np.log10(wf_array[:,1]),color=mycolors[i-1])
    #pdf.savefig(fig)
    
    for i in range(0,51):
        print(i)
        wf_array = np.transpose(np.loadtxt('Wavefunction_Arrays/'+ Pot +'_Arrays/Shape_3N_pp_'+ str(i) +'_ptot.txt'))
        fig, ax = plt.subplots()
        CS=plt.contourf(Xs,Ys,np.log10(wf_array),levels,cmap=plt.cm.nipy_spectral,vmax=1,vmin=-11)
        cbar=fig.colorbar(CS, ticks=[-11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1])
        cbar.ax.set_yticklabels(['-11', '-10', '-9', '-8', '-7', '-6', '-5', '-4', '-3', '-2', '-1', '0', '1']) 
        add_axes(ax)
        ax.text(-1*i3,1.00,Pot,horizontalalignment='center',verticalalignment='center',fontsize=20)
        ax.text(-1*i3,0.9,r'$p_{tot}=$ '+str(round(i*(3.0/50.0),2))+'GeV',horizontalalignment='center',verticalalignment='center',fontsize=15)
        ax.text(1.3*i3,-0.15,'$log(|\phi^{2}|)$',horizontalalignment='center',verticalalignment='center',fontsize=15)
        pdf.savefig(fig)         

        #for i in (2,3,4,5,6,7):
        #print(i)
        #wf_array = np.transpose(np.loadtxt('Wavefunction_Arrays/'+ Pot +'_Arrays/Shape_3N_pp_'+ str(i) +'_pmiss.txt'))
        #fig, ax = plt.subplots()
        #CS=plt.contourf(Xs,Ys,np.log10(wf_array),levels,cmap=plt.cm.nipy_spectral,vmax=1,vmin=-11)
        #cbar=fig.colorbar(CS, ticks=[-11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1])
        #cbar.ax.set_yticklabels(['-11', '-10', '-9', '-8', '-7', '-6', '-5', '-4', '-3', '-2', '-1', '0', '1']) 
        #add_axes(ax)
        #ax.text(-1*i3,1.00,Pot,horizontalalignment='center',verticalalignment='center',fontsize=20)
        #ax.text(-1*i3,0.9,r'$p_{miss}=$ '+str(round(i*0.2,2))+'GeV',horizontalalignment='center',verticalalignment='center',fontsize=15)
        #ax.text(1.3*i3,-0.15,'$log(|\phi^{2}|)$',horizontalalignment='center',verticalalignment='center',fontsize=15)
        #pdf.savefig(fig)         


pdf.close()



 
