/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingEventEntry.h>

@class NSSet, NSNumber;

@interface PLAccountingQualificationEventEntry : PLAccountingEventEntry {

	NSSet* _childNodeIDs;

}

@property (nonatomic,readonly) NSNumber * qualificationID; 
@property (nonatomic,readonly) NSSet * childNodeIDs;                    //@synthesize childNodeIDs=_childNodeIDs - In the implementation block
@property (nonatomic,readonly) NSSet * childNodeNames; 
+(void)load;
-(int)instanceDirectionality;
-(char)isEqualContentsWithEvent:(id)arg1 ;
-(char)isEmptyEvent;
-(id)initWithQualificationID:(id)arg1 withChildNodeIDs:(id)arg2 withRange:(id)arg3 ;
-(NSNumber *)qualificationID;
-(id)initWithQualificationID:(id)arg1 withChildNodeNames:(id)arg2 withRange:(id)arg3 ;
-(NSSet *)childNodeNames;
-(id)subEntryKey;
-(NSSet *)childNodeIDs;
@end
