/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDaemon/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper {

	double _occurrenceDate;

}
+(char)supportsSecureCoding;
-(id)occurrenceDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3 ;
@end
