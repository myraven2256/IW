//! @file ...
//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

static auto TaskManager_AssertTaskSetIsRegistered(struct OverlappedTaskSet *taskSet) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_GetTaskSetListFromSet(struct OverlappedTaskSet *taskSet) -> struct overlappedTask*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_GetTaskSetName(struct OverlappedTaskSet *taskSet) -> const char*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_ClearTask_Core(struct overlappedTask *task) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_ClearOverlappedTasks(struct OverlappedTaskSet *taskSet) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_ConstructTaskSet(struct OverlappedTaskSet *taskSet, const char *name) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_CancelTask(struct overlappedTask *task) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_CancelTasks_Core(struct OverlappedTaskSet *taskSet, bool any, const int type) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_DestructTaskSet_CanFail(struct OverlappedTaskSet *taskSet) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_DestructTaskSet(struct OverlappedTaskSet *taskSet) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_CancelTasks(struct OverlappedTaskSet *taskSet, const int type) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_DestructAllTaskSets_CanFail() -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_DestructAllTaskSets() -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_GetOpenTaskSlot_Try(struct OverlappedTaskSet *taskSet, const int controllerIndex, const int type, enum TaskSubsystem subsystem) -> struct overlappedTask*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

static auto TaskManager_GetOpenTaskSlot_Internal(struct OverlappedTaskSet *taskSet, const int controllerIndex, const int type, enum TaskSubsystem subsystem) -> struct overlappedTask*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_GetOpenTaskSlotForIwNetStorage(struct OverlappedTaskSet *taskSet, const int controllerIndex, const int type) -> struct overlappedTask*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_GetOpenTaskSlot(struct OverlappedTaskSet *taskSet, const int controllerIndex, const int type) -> struct overlappedTask*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_ClearTask(struct overlappedTask *task) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_AnyTaskInProgress(struct OverlappedTaskSet *taskSet) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_TaskIsInProgress(struct OverlappedTaskSet *taskSet, const int type) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_TaskIsInProgressForController(struct OverlappedTaskSet *taskSet, const int type, const int localControllerIndex) -> bool
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_CountTasksInProgress(struct OverlappedTaskSet *taskSet, const int type) -> int
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_TaskFromXOverlapped(struct OverlappedTaskSet *taskSet, const struct _XOVERLAPPED *xov) -> struct overlappedTask*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_TaskToXOverlapped(struct overlappedTask *overlappedTask) -> struct _XOVERLAPPED*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_TaskToIWNetStorageTaskState(struct overlappedTask *overlappedTask) -> struct IWNetStorageTaskState*
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_SetTaskData(struct overlappedTask *overlappedTask, void *data) -> void
{

}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TaskManager_GetTaskData(struct overlappedTask *overlappedTask) -> void*
{

}

#endif // __UNIMPLEMENTED__
