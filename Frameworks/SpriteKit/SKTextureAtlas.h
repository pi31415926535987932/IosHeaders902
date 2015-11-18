/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString, NSArray;

@interface SKTextureAtlas : NSObject <NSCoding> {

	NSDictionary* _textureDict;
	NSString* _atlasName;
	char _isCUIImageAtlas;
	unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *> > >* _textureMap;

}

@property (nonatomic,readonly) NSArray * textureNames; 
+(CGImageRef)createCGImageFromCUINamedImage:(CGImageRef)arg1 withSize:(CGSize)arg2 atRect:(CGRect)arg3 ;
+(id)findTextureNamed:(id)arg1 ;
+(id)atlasNamed:(id)arg1 ;
+(char)canUseObjectForAtlas:(id)arg1 ;
+(void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)atlasFromCUIImageAtlas:(id)arg1 withName:(id)arg2 ;
+(id)getSupportedPostfixes;
+(id)atlasWithDictionary:(id)arg1 ;
+(void)preloadTextureAtlasesNamed:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 forcePOT:(char)arg3 ;
+(void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 ;
-(id)textureNamed:(id)arg1 ;
-(id)_copyImageData;
-(void)preloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_prePopulateCache;
-(void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2 ;
-(void)loadTexturesFromCUIImageAtlas:(id)arg1 ;
-(void)loadTextures;
-(id)findTextureNamedFromAtlas:(id)arg1 ;
-(NSArray *)textureNames;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)commonInit;
-(void)preload;
-(void)unload;
@end

