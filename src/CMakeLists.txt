target_include_directories(${EXEC_NAME} PRIVATE .)

target_link_libraries(${EXEC_NAME}
		Qt6::Core
		Qt6::Network

)


target_sources(${EXEC_NAME} PRIVATE
	./main.cpp
	./myNetworkInterface.h
	./myNetworkInterface.cpp
	
	)
