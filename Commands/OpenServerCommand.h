//
// Created by matan on 12/16/19.
//

#ifndef EX1_OPENSERVERCOMMAND_H
#define EX1_OPENSERVERCOMMAND_H

#include "Command.h"

class OpenServerCommand : public Command {
public:
    int execute() override;
};


#endif //EX1_OPENSERVERCOMMAND_H
