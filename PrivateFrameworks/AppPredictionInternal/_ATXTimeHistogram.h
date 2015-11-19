/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	unsigned _capacity;
	SCD_Struct_AT3* _entries;

}

@property (nonatomic,readonly) unsigned count;              //@synthesize count=_count - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(void)clear;
-(unsigned short)pointsPerDay;
-(void)addEventWithId:(unsigned)arg1 atLocalTime:(unsigned short)arg2 ;
-(void)addEventWithId:(unsigned)arg1 atLocalTime:(unsigned short)arg2 count:(double)arg3 ;
-(double)computeCountWithEventId:(unsigned)arg1 ;
-(void)removeEventsWithId:(unsigned)arg1 ;
-(double)computeCountWithEventId:(unsigned)arg1 atLocaltime:(unsigned short)arg2 ;
-(double)totalCountsAtLocaltime:(unsigned short)arg1 ;
-(double)totalCounts;
-(void)decayByFactor:(double)arg1 ;
-(void)decayWithHalfLife:(double)arg1 ;
-(void)sortBuckets;
-(id)descriptionWithEventNames:(/*^block*/id)arg1 ;
-(void)computeCounts:(double*)arg1 size:(unsigned)arg2 ;
-(void)computeCounts:(double*)arg1 size:(unsigned)arg2 atLocaltime:(unsigned short)arg3 ;
@end

