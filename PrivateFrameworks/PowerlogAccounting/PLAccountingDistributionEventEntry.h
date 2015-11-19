/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSDictionary, NSNumber;

@interface PLAccountingDistributionEventEntry : PLAccountingEventEntry {

	NSDictionary* _childNodeIDToWeight;

}

@property (nonatomic,readonly) NSNumber * distributionID; 
@property (nonatomic,readonly) NSDictionary * childNodeIDToWeight;                //@synthesize childNodeIDToWeight=_childNodeIDToWeight - In the implementation block
@property (nonatomic,readonly) NSDictionary * childNodeNameToWeight; 
+(void)load;
-(id)initWithDistributionID:(id)arg1 withChildNodeIDToWeight:(id)arg2 withRange:(id)arg3 ;
-(int)instanceDirectionality;
-(NSNumber *)distributionID;
-(id)initWithDistributionID:(id)arg1 withChildNodeNameToWeight:(id)arg2 withRange:(id)arg3 ;
-(NSDictionary *)childNodeNameToWeight;
-(char)isEqualContentsWithEvent:(id)arg1 ;
-(char)isEmptyEvent;
-(id)subEntryKey;
-(NSDictionary *)childNodeIDToWeight;
@end

