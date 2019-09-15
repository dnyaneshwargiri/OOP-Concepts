################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/stl\ stack\ queue.cpp 

OBJS += \
./src/stl\ stack\ queue.o 

CPP_DEPS += \
./src/stl\ stack\ queue.d 


# Each subdirectory must supply rules for building sources it contributes
src/stl\ stack\ queue.o: ../src/stl\ stack\ queue.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/stl stack queue.d" -MT"src/stl\ stack\ queue.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


