/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding> {

	int _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) int type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(int)arg3 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(int)type;
@end

