#ifndef TELECOMMAND_ARBITER_TASK_TASK_HPP
#define TELECOMMAND_ARBITER_TASK_TASK_HPP

#include "telecommand_arbiter/TaskBase.hpp"

namespace telecommand_arbiter {

    class Task : public TaskBase
    {
	friend class TaskBase;
    protected:

    public:
        Task(std::string const& name = "telecommand_arbiter::Task");
        Task(std::string const& name, RTT::ExecutionEngine* engine);

        ~Task();

        bool configureHook();
        bool startHook();
        void updateHook();
        void errorHook();
        void stopHook();
        void cleanupHook();
    };
}

#endif
