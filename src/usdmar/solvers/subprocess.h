#pragma once

#include <iostream>
#include "usdmar/solvers/subsolver.h"


class SubprocessSubSolver final: public SubSolver {

public:

	const std::string GetName() override;
	std::string Resolve(std::string assetPath) override;
	void ConfigureFromJsObject(const JsObject& object) override;

	inline std::shared_ptr<SubSolver> CreateNew() const {
		return {};
	};

private:
	std::string _name = "subprocess";
	std::string _executable = "";
	std::vector<std::string> _arguments;
	std::string _windowsSuffix;
	std::string _communicateToken = "USDMAR_RESULT:";
	std::string _fullCommand;
};
