################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/file\ handling.cpp 

OBJS += \
./src/file\ handling.o 

CPP_DEPS += \
./src/file\ handling.d 


# Each subdirectory must supply rules for building sources it contributes
src/file\ handling.o: ../src/file\ handling.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/file handling.d" -MT"src/file\ handling.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


