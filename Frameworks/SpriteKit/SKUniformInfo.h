/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUniform;

@interface SKUniformInfo : NSObject {

	unsigned seed;
	unsigned textureTarget;
	SKUniform* uniform;

}

@property (assign) unsigned seed; 
@property (assign) unsigned textureTarget; 
@property (retain) SKUniform * uniform; 
-(unsigned)textureTarget;
-(void)setTextureTarget:(unsigned)arg1 ;
-(SKUniform *)uniform;
-(void)setUniform:(SKUniform *)arg1 ;
-(id)init;
-(unsigned)seed;
-(void)setSeed:(unsigned)arg1 ;
@end

