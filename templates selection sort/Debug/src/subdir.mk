################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/templates\ selction\ sort.cpp 

OBJS += \
./src/templates\ selction\ sort.o 

CPP_DEPS += \
./src/templates\ selction\ sort.d 


# Each subdirectory must supply rules for building sources it contributes
src/templates\ selction\ sort.o: ../src/templates\ selction\ sort.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/templates selction sort.d" -MT"src/templates\ selction\ sort.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


