#ifndef DrDiscoPLUGIN_H
#define DrDiscoPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class DrDiscoPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "DrDisco";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
