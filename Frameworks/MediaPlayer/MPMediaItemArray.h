/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MPMediaItemArray : NSObject <NSSecureCoding> {

	Class _itemArrayCoderPIDDataCodingClass;
	NSArray* _items;

}

@property (nonatomic,retain,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
@end

