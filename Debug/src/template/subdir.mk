################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/template/class_template.cpp \
../src/template/function_tempate.cpp 

OBJS += \
./src/template/class_template.o \
./src/template/function_tempate.o 

CPP_DEPS += \
./src/template/class_template.d \
./src/template/function_tempate.d 


# Each subdirectory must supply rules for building sources it contributes
src/template/%.o: ../src/template/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


