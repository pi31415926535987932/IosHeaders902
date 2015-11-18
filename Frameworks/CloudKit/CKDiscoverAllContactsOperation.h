/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation {

	/*^block*/id _discoverAllContactsCompletionBlock;
	NSMutableArray* _discoveredUserInfos;

}

@property (nonatomic,copy) id discoverAllContactsCompletionBlock;               //@synthesize discoverAllContactsCompletionBlock=_discoverAllContactsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * discoveredUserInfos;              //@synthesize discoveredUserInfos=_discoveredUserInfos - In the implementation block
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setDiscoverAllContactsCompletionBlock:(id)arg1 ;
-(id)discoverAllContactsCompletionBlock;
-(NSMutableArray *)discoveredUserInfos;
-(void)setDiscoveredUserInfos:(NSMutableArray *)arg1 ;
-(id)init;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationInfoClass;
@end

