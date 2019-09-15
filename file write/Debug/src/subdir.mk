################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/telephone\ records.cpp 

OBJS += \
./src/telephone\ records.o 

CPP_DEPS += \
./src/telephone\ records.d 


# Each subdirectory must supply rules for building sources it contributes
src/telephone\ records.o: ../src/telephone\ records.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/telephone records.d" -MT"src/telephone\ records.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


