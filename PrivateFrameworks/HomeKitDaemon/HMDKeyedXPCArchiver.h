/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSKeyedArchiver;

@interface HMDKeyedXPCArchiver : NSObject {

	NSKeyedArchiver* _archiver;

}

@property (nonatomic,retain) NSKeyedArchiver * archiver;              //@synthesize archiver=_archiver - In the implementation block
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)finishEncoding;
-(void)_configure;
-(void)setArchiver:(NSKeyedArchiver *)arg1 ;
-(id)initForWritingWithMutableData:(id)arg1 message:(id)arg2 ;
-(NSKeyedArchiver *)archiver;
@end
