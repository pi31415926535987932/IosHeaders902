/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray;

@interface CKFetchRecordChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	char _shouldFetchAssetContents;
	char _fetchAllChanges;
	CKRecordZoneID* _recordZoneID;
	CKServerChangeToken* _previousServerChangeToken;
	NSArray* _desiredKeys;
	unsigned _resultsLimit;
	int _changeTypes;

}

@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                                //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContents;                                //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) unsigned resultsLimit;                                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) int changeTypes;                                              //@synthesize changeTypes=_changeTypes - In the implementation block
@property (assign,nonatomic) char fetchAllChanges;                                         //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)desiredKeys;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(unsigned)resultsLimit;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setResultsLimit:(unsigned)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(int)changeTypes;
-(void)setChangeTypes:(int)arg1 ;
-(char)shouldFetchAssetContents;
-(char)fetchAllChanges;
-(void)setShouldFetchAssetContents:(char)arg1 ;
-(void)setFetchAllChanges:(char)arg1 ;
@end

