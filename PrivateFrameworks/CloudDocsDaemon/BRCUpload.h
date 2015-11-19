/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCTransfer.h>

@class CKRecordID, BRCItemID, NSString, NSNumber, BRCProgress, CKRecord;

@interface BRCUpload : NSObject <BRCTransfer> {

	long long _throttleID;
	unsigned long long _totalSize;
	NSString* _stageID;
	BRCItemID* _itemID;
	CKRecord* _record;
	BRCProgress* _progress;
	unsigned long long _doneSize;

}

@property (nonatomic,readonly) long long throttleID;                        //@synthesize throttleID=_throttleID - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,readonly) CKRecordID * secondaryRecordID; 
@property (nonatomic,readonly) BRCItemID * itemID;                          //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * stageID;                          //@synthesize stageID=_stageID - In the implementation block
@property (nonatomic,readonly) NSNumber * transferID; 
@property (nonatomic,readonly) NSString * etag; 
@property (nonatomic,readonly) unsigned long long totalSize;                //@synthesize totalSize=_totalSize - In the implementation block
@property (nonatomic,readonly) BRCProgress * progress;                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long doneSize;                   //@synthesize doneSize=_doneSize - In the implementation block
@property (nonatomic,retain) CKRecord * record;                             //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecord * secondaryRecord; 
-(BRCItemID *)itemID;
-(CKRecord *)record;
-(id)description;
-(BRCProgress *)progress;
-(NSNumber *)transferID;
-(NSString *)stageID;
-(CKRecordID *)secondaryRecordID;
-(unsigned long long)doneSize;
-(void)setDoneSize:(unsigned long long)arg1 ;
-(CKRecord *)secondaryRecord;
-(void)setSecondaryRecord:(CKRecord *)arg1 ;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3 ;
-(long long)throttleID;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSString *)etag;
-(CKRecordID *)recordID;
-(unsigned long long)totalSize;
@end

