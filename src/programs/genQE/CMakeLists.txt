add_executable(genQE genQE.cc ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator.cc)
target_link_libraries(genQE ${ROOT_LIBRARIES})

add_executable(SRC_analysis_2N SRC_analysis_2N.cpp ${LIBRARIES}/cross_sections/eNCrossSection.cc ${LIBRARIES}/generator/gcfGenerator.cc ${LIBRARIES}/nucleus/gcfNucleus.cc ${LIBRARIES}/nucleus/gcfSRC.cc QEGenerator.cc)
target_link_libraries(SRC_analysis_2N ${ROOT_LIBRARIES})
