# - build library

# library
set(_TARGET pyG4event)
add_library(
  ${_TARGET} SHARED
  pyG4ClassificationOfNewTrack.cc
  pyG4Event.cc
  pyG4EventManager.cc
  pyG4ParticleGun.cc
  pyG4StackManager.cc
  pyG4UserEventAction.cc
  pyG4UserStackingAction.cc
  pymodG4event.cc
)

set_target_properties (${_TARGET} PROPERTIES PREFIX "" )
set_target_properties(${_TARGET} PROPERTIES OUTPUT_NAME "G4event")
set_target_properties(${_TARGET} PROPERTIES SUFFIX ".so")
set_target_properties(${_TARGET}
                      PROPERTIES INSTALL_RPATH
                      ${GEANT4_LIBRARY_DIR}
                      BUILD_WITH_INSTALL_RPATH TRUE)

target_link_libraries (${_TARGET}
                      ${GEANT4_LIBRARIES_WITH_VIS} ${BOOST_PYTHON_LIB}
                      ${PYTHON_LIBRARIES})

# install
install(TARGETS ${_TARGET} LIBRARY DESTINATION ${G4MODULES_INSTALL_DIR})
