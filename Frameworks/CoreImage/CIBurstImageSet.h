/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:47:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {

	CIBurstImageSetInternal* _priv;

}
+(id)defaultVersionString;
+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg1 ;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(char)isPortrait;
-(char)isAction;
-(double)secondsSinceStart;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(unsigned)imageClusterCount;
-(id)imageClusterForIndex:(unsigned)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)burstId;
-(id)allImageIdentifiers;
-(id)bestImageIdentifiers;
-(id)coverImageIdentifier;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

