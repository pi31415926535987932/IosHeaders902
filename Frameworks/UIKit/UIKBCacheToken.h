/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {

	NSMutableArray* _components;
	NSString* _name;
	float _scale;
	int _emptyFields;
	int _renderFlags;

}

@property (nonatomic,readonly) NSString * string; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int rowHint; 
@property (assign,nonatomic) int displayHint; 
@property (assign,nonatomic) int renderFlags;                      //@synthesize renderFlags=_renderFlags - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI35 styling; 
@property (assign,nonatomic) int emptyFields;                      //@synthesize emptyFields=_emptyFields - In the implementation block
@property (nonatomic,readonly) char hasKey; 
+(id)tokenForKeyplane:(id)arg1 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI35)arg2 ;
+(id)tokenForKeyMask:(id)arg1 style:(SCD_Struct_UI35)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI35)arg2 displayInsets:(UIEdgeInsets)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(CGSize)arg4 ;
+(id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
+(id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(CGSize)arg3 ;
-(CGSize)size;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setSize:(CGSize)arg1 ;
-(id)stringForState:(int)arg1 ;
-(SCD_Struct_UI35)styling;
-(void)setStyling:(SCD_Struct_UI35)arg1 ;
-(int)emptyFields;
-(char)hasKey;
-(void)annotateWithBool:(char)arg1 ;
-(id)stringForKey:(id)arg1 state:(int)arg2 ;
-(id)stringForSplitState:(char)arg1 ;
-(void)setRenderFlags:(int)arg1 ;
-(int)renderFlags;
-(id)stringForRenderFlags:(int)arg1 lightKeyboard:(char)arg2 ;
-(id)initWithName:(id)arg1 ;
-(char)isUsableForCacheToken:(id)arg1 withRenderFlags:(int)arg2 ;
-(id)initWithComponents:(id)arg1 name:(id)arg2 ;
-(int)_writeString:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeNumber:(float)arg1 toStr:(char*)arg2 ;
-(int)_writeEdgeInsets:(UIEdgeInsets)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(int)_writeArray:(id)arg1 toStr:(char*)arg2 maxLen:(int)arg3 ;
-(id)stringForConstruction:(/*^block*/id)arg1 ;
-(id)stringForComponentArray:(id)arg1 additionalValues:(/*^block*/id)arg2 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(void)setEmptyFields:(int)arg1 ;
@end

