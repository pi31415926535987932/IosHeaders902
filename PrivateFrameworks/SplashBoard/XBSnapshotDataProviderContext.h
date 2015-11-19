/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SplashBoard/SplashBoard-Structs.h>
@interface XBSnapshotDataProviderContext : NSObject {

	float _scale;
	char _opaque;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) float scale;                                  //@synthesize scale=_scale - In the implementation block
@property (assign,getter=isOpaque,nonatomic) char opaque;                  //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) CGAffineTransform baseTransform;              //@synthesize transform=_transform - In the implementation block
-(void)setOpaque:(char)arg1 ;
-(id)init;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(char)isOpaque;
-(CGAffineTransform)baseTransform;
-(void)setBaseTransform:(CGAffineTransform)arg1 ;
@end

