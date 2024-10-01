#pragma once

#include <iostream>
#include <regex>

#include "usdmar/solvers/subsolver.h"

class FormatterSubSolver final : public SubSolver {

public:

	const std::string GetName() override;
	std::string Resolve(std::string assetPath) override;
	void ConfigureFromJsObject(const JsObject& object) override;
	inline std::shared_ptr<SubSolver> CreateNew() const {
		return {};
	};


private:
	std::string _name = "format";
	std::map<std::string, std::string> _formatters;
};
