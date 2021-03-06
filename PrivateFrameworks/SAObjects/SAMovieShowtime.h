/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIAppPunchOut, NSNumber, SACalendar, NSString;

@interface SAMovieShowtime : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIAppPunchOut * buyTicketsPunchout; 
@property (nonatomic,copy) NSNumber * childTicketQuantity; 
@property (assign,nonatomic) char is3d; 
@property (assign,nonatomic) char isImax; 
@property (nonatomic,copy) NSNumber * regularTicketQuantity; 
@property (nonatomic,copy) NSNumber * seniorTicketQuantity; 
@property (nonatomic,retain) SACalendar * showtime; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showtime;
+(id)showtimeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)is3d;
-(void)setIs3d:(char)arg1 ;
-(SACalendar *)showtime;
-(SAUIAppPunchOut *)buyTicketsPunchout;
-(void)setBuyTicketsPunchout:(SAUIAppPunchOut *)arg1 ;
-(NSNumber *)childTicketQuantity;
-(void)setChildTicketQuantity:(NSNumber *)arg1 ;
-(char)isImax;
-(void)setIsImax:(char)arg1 ;
-(NSNumber *)regularTicketQuantity;
-(void)setRegularTicketQuantity:(NSNumber *)arg1 ;
-(NSNumber *)seniorTicketQuantity;
-(void)setSeniorTicketQuantity:(NSNumber *)arg1 ;
-(void)setShowtime:(SACalendar *)arg1 ;
@end

