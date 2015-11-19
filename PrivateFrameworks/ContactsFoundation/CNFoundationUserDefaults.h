/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>

@protocol CNFoundationUserDefaults <NSObject>
@property (assign) char preferNickname; 
@property (assign) unsigned nameOrder; 
@property (assign) unsigned shortNameFormat; 
@required
-(unsigned)nameOrder;
-(unsigned)newContactNameOrder;
-(void)setNameOrder:(unsigned)arg1;
-(unsigned)shortNameFormat;
-(void)setShortNameFormat:(unsigned)arg1;
-(unsigned)sortOrder;
-(char)preferNickname;
-(void)setPreferNickname:(char)arg1;
-(id)countryCode;

@end


@class NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char preferNickname; 
@property (assign) unsigned nameOrder; 
@property (assign) unsigned shortNameFormat; 
+(unsigned)_convertNSNameOrderToCNNameOrder:(int)arg1 ;
+(id)sharedDefaults;
-(unsigned)nameOrder;
-(unsigned)newContactNameOrder;
-(void)setNameOrder:(unsigned)arg1 ;
-(unsigned)shortNameFormat;
-(void)setShortNameFormat:(unsigned)arg1 ;
-(unsigned)sortOrder;
-(char)preferNickname;
-(void)setPreferNickname:(char)arg1 ;
-(id)countryCode;
@end

