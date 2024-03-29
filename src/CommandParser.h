#ifndef PROCESSOREMULATOR_COMMANDPARSER_H
#define PROCESSOREMULATOR_COMMANDPARSER_H

#include <vector>
#include <string>
#include <regex>
#include <memory>
#include <Commands.h>

namespace processorEmulator::CommandParser {

    class LineParser {

    public:

        explicit LineParser(std::string programPath, std::string objectRegex = "([+-]?[1-9]*[0-9]*)");

        void parse();

        std::vector<std::shared_ptr<Commands::BaseCommand>> getCommands() { return _commandVector; }

        std::map<size_t , size_t> getLabels() {return _labelsMap; }

        static std::vector<std::function<std::shared_ptr<Commands::BaseCommand>()>> _generatorVector;


    private:

        std::string _programPath;
        std::string _objectRegex;
        std::vector<std::shared_ptr<Commands::BaseCommand>> _commandVector;
        std::map<size_t, size_t> _labelsMap;

    };


}


#endif
