################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/read-write\ in\ file.cpp 

OBJS += \
./src/read-write\ in\ file.o 

CPP_DEPS += \
./src/read-write\ in\ file.d 


# Each subdirectory must supply rules for building sources it contributes
src/read-write\ in\ file.o: ../src/read-write\ in\ file.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/read-write in file.d" -MT"src/read-write\ in\ file.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


