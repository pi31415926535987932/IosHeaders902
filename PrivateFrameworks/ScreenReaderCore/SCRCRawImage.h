/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCRawImage : NSObject {

	CGImageRef _imageRef;
	char* _data;
	int _width;
	int _height;
	int _bytesPerPixel;

}

@property (assign,nonatomic) char* data;                       //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int width;                        //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) int height;                       //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) int bytesPerPixel;                //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,retain) CGImageRef imageRef;              //@synthesize imageRef=_imageRef - In the implementation block
+(id)rawImageForImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(char*)data;
-(void)setData:(char*)arg1 ;
-(CGImageRef)imageRef;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(int)bytesPerPixel;
-(void)setBytesPerPixel:(int)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
@end

