/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADEventPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <NSSecureCoding> {

	NSString* _externalIdentifier;

}

@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(id)predicateFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(NSString *)externalIdentifier;
@end

