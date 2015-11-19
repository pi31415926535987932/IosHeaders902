/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLCloudTaskManager : NSObject {

	NSMutableDictionary* _pendingTaskForTaskIdentifier;
	NSMutableDictionary* _resourceForTaskIdentifier;
	NSMutableDictionary* _highPriorityResourceToTaskIdentifierMap;
	NSMutableDictionary* _lowPriorityResourceToTaskIdentifierMap;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)cancelTaskWithTaskIdentifier:(id)arg1 ;
-(id)getPendingTaskForTaskIdentifier:(id)arg1 ;
-(char)hasTaskIdentifierForResource:(id)arg1 highPriority:(char)arg2 ;
-(id)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forResource:(id)arg3 highPriority:(char)arg4 ;
-(void)createPendingTaskWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forResource:(id)arg3 highPriority:(char)arg4 withTaskIdentifier:(id)arg5 ;
-(void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)reportCompletionForResource:(id)arg1 withError:(id)arg2 highPriority:(char)arg3 ;
-(void)reportProgress:(float)arg1 forResource:(id)arg2 highPriority:(char)arg3 ;
-(id)taskIdentifiersForResource:(id)arg1 highPriority:(char)arg2 ;
-(id)firstTaskIdentifierForResource:(id)arg1 highPriority:(char)arg2 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)setTaskIdentifiers:(id)arg1 forResource:(id)arg2 highPriority:(char)arg3 ;
-(id)taskForResource:(id)arg1 highPriority:(char)arg2 ;
-(void)removeTaskIdentifiersForResource:(id)arg1 highPriority:(char)arg2 ;
@end
