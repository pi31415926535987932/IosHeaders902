/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _MFEmailSetEmail : NSObject {

	unsigned long _hash;
	NSString* _encodedAddress;
	NSString* _comment;

}

@property (nonatomic,readonly) unsigned long hash; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,readonly) NSString * commentedAddress; 
-(id)initWithAddress:(id)arg1 ;
-(NSString *)address;
-(void)dealloc;
-(unsigned long)hash;
-(id)description;
-(NSString *)commentedAddress;
-(void)setAddress:(NSString *)arg1 ;
-(char)isEqualToEmail:(id)arg1 ;
@end
