#include "pch.h"
#include <iostream>
#include <sstream>
#include <gtest/gtest.h>

// Uncomment for main
#define APPROVALS_GOOGLETEST
#include "ApprovalTests.v.8.9.2.hpp"

#include "GameRunner.h"

using namespace std;

TEST(GoldenMasterTest, ConsoleOutput)
{
	testing::internal::CaptureStdout();
	
	run();

	std::string output = testing::internal::GetCapturedStdout();

	ApprovalTests::Approvals::verify(output);

}