/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperation : CKOperation {

	char _moreComing;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned _resultsLimit;
	/*^block*/id _notificationChangedBlock;
	/*^block*/id _fetchNotificationChangesCompletionBlock;
	CKServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned resultsLimit;                                      //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) char moreComing;                                            //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,copy) id notificationChangedBlock;                                  //@synthesize notificationChangedBlock=_notificationChangedBlock - In the implementation block
@property (nonatomic,copy) id fetchNotificationChangesCompletionBlock;                   //@synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchNotificationChangesCompletionBlock;
-(id)initWithPreviousServerChangeToken:(id)arg1 ;
-(void)setNotificationChangedBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(unsigned)resultsLimit;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setResultsLimit:(unsigned)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)notificationChangedBlock;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(char)moreComing;
-(void)setMoreComing:(char)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(void)setFetchNotificationChangesCompletionBlock:(id)arg1 ;
@end

