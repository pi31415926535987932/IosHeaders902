/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, EKAvailabilitySpan;

@interface EKAvailabilityCachedSpan : NSObject {

	NSDate* _creationDate;
	EKAvailabilitySpan* _span;

}

@property (nonatomic,retain) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) EKAvailabilitySpan * span;              //@synthesize span=_span - In the implementation block
-(void)setSpan:(EKAvailabilitySpan *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)dealloc;
-(id)description;
-(EKAvailabilitySpan *)span;
@end

