#include <gtest/gtest.h>
#include <vector>

#include <ProcessorEmulator.h>
#include <CommandParser.h>
#include <Commands.h>

using namespace processorEmulator;

TEST(Operation, Parsing){
    std::vector<Commands::BaseCommand> commands;
    CommandParser::LineParser parser{"/home/gosha/CLionProjects/ProcessorEmulator/tests/test_program", "([+-]?[1-9]*[0-9]*)"};
    commands = parser.getCommandVector();
}