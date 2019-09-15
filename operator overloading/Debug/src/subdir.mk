################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/operator\ overloading.cpp 

OBJS += \
./src/operator\ overloading.o 

CPP_DEPS += \
./src/operator\ overloading.d 


# Each subdirectory must supply rules for building sources it contributes
src/operator\ overloading.o: ../src/operator\ overloading.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/operator overloading.d" -MT"src/operator\ overloading.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


