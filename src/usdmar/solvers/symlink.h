#pragma once

#include <iostream>
#include "usdmar/solvers/subsolver.h"


class SymlinkSubSolver final: public SubSolver {

public:

	const std::string GetName() override;
	std::string Resolve(std::string assetPath) override;
	void ConfigureFromJsObject(const JsObject& object) override;

	inline std::shared_ptr<SubSolver> CreateNew() const {
		return {};
	};

private:
	std::string _name = "symlink";
};
