/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLTile : NSObject {

	IOSurfaceRef _decodedSurface;
	CGRect _imageRect;
	id _tileId;
	char _visible;

}
-(void)dealloc;
-(char)visible;
-(void)setVisible:(char)arg1 ;
-(void)setDecodedSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)decodedSurface;
-(void)setTileId:(id)arg1 ;
-(id)tileId;
-(void)setImageRect:(CGRect)arg1 ;
-(CGRect)imageRect;
@end

