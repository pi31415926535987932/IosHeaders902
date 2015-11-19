/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/SagaCloudAddOperation.h>

@class NSDictionary;

@interface SagaCloudAddItemOperation : SagaCloudAddOperation {

	long long _adamID;
	NSDictionary* _adamIDToSagaIDMap;

}

@property (nonatomic,retain) NSDictionary * adamIDToSagaIDMap;              //@synthesize adamIDToSagaIDMap=_adamIDToSagaIDMap - In the implementation block
-(id)initWithAdamID:(long long)arg1 ;
-(NSDictionary *)adamIDToSagaIDMap;
-(id)cloudAddRequestWithDatabaseID:(unsigned)arg1 ;
-(id)cloudAddRequestDescription;
-(void)processAddedItems:(id)arg1 ;
-(void)removePendingAddedItemsForPermanentlyFailedOperation;
-(void)setAdamIDToSagaIDMap:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

