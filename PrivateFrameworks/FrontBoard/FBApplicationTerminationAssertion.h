/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:28:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBApplicationTerminationAssertion : NSObject {

	NSString* _bundleID;
	NSString* _reason;
	id _plugInHoldToken;
	unsigned long long _serialNumber;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) id plugInHoldToken;                           //@synthesize plugInHoldToken=_plugInHoldToken - In the implementation block
-(NSString *)bundleID;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)reason;
-(id)plugInHoldToken;
-(void)setPlugInHoldToken:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(unsigned long long)serialNumber;
@end

