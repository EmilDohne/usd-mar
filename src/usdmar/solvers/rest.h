#pragma once

#include <iostream>
#include "usdmar/solvers/subsolver.h"

class RESTSubSolver final : public SubSolver {

public:

	const std::string GetName() override;
	void SetHost(std::string host);
	const std::string GetHost();
	void SetEntryPoint(std::string entryPoint);
	std::string Resolve(std::string assetPath) override;
	void ConfigureFromJsObject(const JsObject& object) override;
	inline std::shared_ptr<SubSolver> CreateNew() const {
		return {};
	};



private:
	std::string _host;
	std::string _entryPoint;
	std::string _name = "rest";
};
