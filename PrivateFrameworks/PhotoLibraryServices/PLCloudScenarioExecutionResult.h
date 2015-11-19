/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLCloudScenarioExecutionResult : NSObject {

	char _duplicateScenario;
	NSMutableArray* _failedOperations;
	NSMutableArray* _successfullOperations;

}

@property (assign,nonatomic) char duplicateScenario;                              //@synthesize duplicateScenario=_duplicateScenario - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedOperations;                   //@synthesize failedOperations=_failedOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * successfullOperations;              //@synthesize successfullOperations=_successfullOperations - In the implementation block
-(void)dealloc;
-(id)init;
-(NSMutableArray *)failedOperations;
-(NSMutableArray *)successfullOperations;
-(void)setDuplicateScenario:(char)arg1 ;
-(char)duplicateScenario;
-(void)setFailedOperations:(NSMutableArray *)arg1 ;
-(void)setSuccessfullOperations:(NSMutableArray *)arg1 ;
@end
