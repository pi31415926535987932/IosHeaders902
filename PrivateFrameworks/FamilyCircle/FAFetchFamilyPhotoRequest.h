/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest {

	char _localFallback;
	char _useMonogramAsLastResort;
	NSNumber* _memberDSID;
	NSString* _memberHashedDSID;
	unsigned _requestedSize;
	int _monogramStyle;
	NSString* _fullname;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	double _requiredWidth;
	double _requiredHeight;
	double _monogramDiameter;

}

@property (copy,readonly) NSNumber * memberDSID;                    //@synthesize memberDSID=_memberDSID - In the implementation block
@property (copy,readonly) NSString * memberHashedDSID;              //@synthesize memberHashedDSID=_memberHashedDSID - In the implementation block
@property (readonly) char localFallback;                            //@synthesize localFallback=_localFallback - In the implementation block
@property (readonly) unsigned requestedSize;                        //@synthesize requestedSize=_requestedSize - In the implementation block
@property (assign) double requiredWidth;                            //@synthesize requiredWidth=_requiredWidth - In the implementation block
@property (assign) double requiredHeight;                           //@synthesize requiredHeight=_requiredHeight - In the implementation block
@property (assign) double monogramDiameter;                         //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
@property (assign) char useMonogramAsLastResort;                    //@synthesize useMonogramAsLastResort=_useMonogramAsLastResort - In the implementation block
@property (assign) int monogramStyle;                               //@synthesize monogramStyle=_monogramStyle - In the implementation block
@property (copy) NSString * fullname;                               //@synthesize fullname=_fullname - In the implementation block
@property (copy) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * phoneNumber;                            //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(double)requiredHeight;
-(id)init;
-(NSString *)phoneNumber;
-(NSNumber *)memberDSID;
-(id)requestOptions;
-(id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned)arg2 localFallback:(char)arg3 ;
-(void)setMonogramDiameter:(double)arg1 ;
-(void)setMonogramStyle:(int)arg1 ;
-(int)monogramStyle;
-(double)monogramDiameter;
-(NSString *)fullname;
-(char)useMonogramAsLastResort;
-(NSString *)memberHashedDSID;
-(unsigned)requestedSize;
-(char)localFallback;
-(id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned)arg2 localFallback:(char)arg3 ;
-(void)setRequiredWidth:(double)arg1 ;
-(void)setRequiredHeight:(double)arg1 ;
-(void)setUseMonogramAsLastResort:(char)arg1 ;
-(void)setFullname:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(double)requiredWidth;
@end

