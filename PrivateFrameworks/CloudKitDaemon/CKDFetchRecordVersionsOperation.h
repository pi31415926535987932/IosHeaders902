/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class NSArray, NSString, NSObject;

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation {

	char _isDeleted;
	char _shouldFetchAssetContent;
	/*^block*/id _recordVersionFetchedBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSObject*<OS_dispatch_group> _fetchVersionsGroup;

}

@property (nonatomic,copy) id recordVersionFetchedBlock;                                   //@synthesize recordVersionFetchedBlock=_recordVersionFetchedBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                                          //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;                                //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (assign,nonatomic) char isDeleted;                                               //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                                 //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchVersionsGroup;              //@synthesize fetchVersionsGroup=_fetchVersionsGroup - In the implementation block
-(char)isDeleted;
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordVersionFetchedBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(char)shouldFetchAssetContent;
-(NSArray *)recordIDs;
-(void)setIsDeleted:(char)arg1 ;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(void)setFetchVersionsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchVersionsGroup;
-(id)recordVersionFetchedBlock;
-(void)_handleRecordVersionsFecthedForID:(id)arg1 isDeleted:(char)arg2 versions:(id)arg3 responseCode:(id)arg4 ;
@end
