################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ReadCsvFile.cpp \
../src/tcReadCsvFile.cpp 

OBJS += \
./src/ReadCsvFile.o \
./src/tcReadCsvFile.o 

CPP_DEPS += \
./src/ReadCsvFile.d \
./src/tcReadCsvFile.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I../src -I/usr/local/boost_1_59_0/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


