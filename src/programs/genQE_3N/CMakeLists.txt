include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(genQE_3N genQE_3N.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
target_link_libraries(genQE_3N ${ROOT_LIBRARIES})

#add_executable(read_in read_in.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
#target_link_libraries(read_in ${ROOT_LIBRARIES})
#
#add_executable(read_in_withclass read_in_withclass.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
#target_link_libraries(read_in_withclass ${ROOT_LIBRARIES})
#
#add_executable(k1k2theta12 k1k2theta12.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
#target_link_libraries(k1k2theta12 ${ROOT_LIBRARIES})
#
#add_executable(Sf1f2 Sf1f2.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
#target_link_libraries(Sf1f2 ${ROOT_LIBRARIES})
#
#add_executable(fS fS.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
#target_link_libraries(fS ${ROOT_LIBRARIES})
#add_executable(fS fS.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
#target_link_libraries(fS ${ROOT_LIBRARIES})
add_executable(theta_plot analysis/theta_plot.cpp ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
target_link_libraries(theta_plot ${ROOT_LIBRARIES})

add_executable(theta_plot_fast analysis/theta_plot_fast.cpp ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
target_link_libraries(theta_plot_fast ${ROOT_LIBRARIES})

add_executable(theta_plot_sinelaw analysis/theta_plot_sinelaw.cpp ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
target_link_libraries(theta_plot_sinelaw ${ROOT_LIBRARIES})

add_executable(SRC_analysis_3N analysis/SRC_analysis_3N.cpp ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
target_link_libraries(SRC_analysis_3N ${ROOT_LIBRARIES})

add_executable(theta_scan analysis/theta_scan.cpp ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator_3N.cc)
target_link_libraries(theta_scan ${ROOT_LIBRARIES})


