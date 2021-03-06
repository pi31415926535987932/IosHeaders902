/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:21:23 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GLKit/GLKit-Structs.h>
@class NSData, NSString;

@interface GLKTexture : NSObject {

	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;
	int _unpackAlignment;
	char _requestIssuedForAlphaPremultiplication;
	char _requestIssuedForMipmapGeneration;
	char _requestIssuedToReorientToGL;
	char _requestIssuedToInterpretGrayAsAlpha;
	char _requestIssuedForSRGB;
	unsigned _primarySurfaceLength;
	char _hasPremultipliedAlpha;
	char _isPowerOfTwo;
	char _isCubeMap;
	char _isMipmapped;
	char _isVerticalFlipped;
	char _hasAlpha;
	char _reOrient;
	NSData* _imageData;
	unsigned _GLTextureName;
	unsigned _bindTarget;
	unsigned _textureTarget;
	unsigned _internalFormat;
	unsigned _format;
	unsigned _type;
	int _texelFormat;
	unsigned _width;
	unsigned _height;
	unsigned _orientation;
	unsigned _numMipMapLevels;
	unsigned _bitsPerPixel;
	unsigned _rowBytes;
	unsigned _nComponents;
	unsigned _nPrimarySurfaces;
	unsigned _nSurfaces;
	int _loadMode;
	int _dataCategory;
	unsigned _index;
	NSString* _label;

}

@property (readonly) NSData * imageData;                                              //@synthesize imageData=_imageData - In the implementation block
@property (assign,getter=LTextureName,nonatomic) unsigned GLTextureName;              //@synthesize GLTextureName=_GLTextureName - In the implementation block
@property (assign,nonatomic) unsigned bindTarget;                                     //@synthesize bindTarget=_bindTarget - In the implementation block
@property (assign,nonatomic) unsigned textureTarget;                                  //@synthesize textureTarget=_textureTarget - In the implementation block
@property (assign,nonatomic) unsigned internalFormat;                                 //@synthesize internalFormat=_internalFormat - In the implementation block
@property (assign,nonatomic) unsigned format;                                         //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int texelFormat;                                         //@synthesize texelFormat=_texelFormat - In the implementation block
@property (assign,nonatomic) unsigned width;                                          //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned height;                                         //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned numMipMapLevels;                                //@synthesize numMipMapLevels=_numMipMapLevels - In the implementation block
@property (assign,nonatomic) unsigned bitsPerPixel;                                   //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign,nonatomic) unsigned rowBytes;                                       //@synthesize rowBytes=_rowBytes - In the implementation block
@property (assign,nonatomic) unsigned nComponents;                                    //@synthesize nComponents=_nComponents - In the implementation block
@property (assign,nonatomic) unsigned nPrimarySurfaces;                               //@synthesize nPrimarySurfaces=_nPrimarySurfaces - In the implementation block
@property (assign,nonatomic) unsigned nSurfaces;                                      //@synthesize nSurfaces=_nSurfaces - In the implementation block
@property (assign,nonatomic) int loadMode;                                            //@synthesize loadMode=_loadMode - In the implementation block
@property (assign,nonatomic) int dataCategory;                                        //@synthesize dataCategory=_dataCategory - In the implementation block
@property (assign,nonatomic) unsigned index;                                          //@synthesize index=_index - In the implementation block
@property (readonly) char hasPremultipliedAlpha;                                      //@synthesize hasPremultipliedAlpha=_hasPremultipliedAlpha - In the implementation block
@property (assign,nonatomic) char isPowerOfTwo;                                       //@synthesize isPowerOfTwo=_isPowerOfTwo - In the implementation block
@property (assign,nonatomic) char isCubeMap;                                          //@synthesize isCubeMap=_isCubeMap - In the implementation block
@property (assign,nonatomic) char isMipmapped;                                        //@synthesize isMipmapped=_isMipmapped - In the implementation block
@property (assign,nonatomic) char isVerticalFlipped;                                  //@synthesize isVerticalFlipped=_isVerticalFlipped - In the implementation block
@property (assign,nonatomic) char hasAlpha;                                           //@synthesize hasAlpha=_hasAlpha - In the implementation block
@property (assign,nonatomic) char reOrient;                                           //@synthesize reOrient=_reOrient - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)updateRequestedOperationsFromOptions:(id)arg1 ;
-(char)loadWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(char)loadPVRTCData:(id)arg1 error:(id*)arg2 ;
-(char)loadCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(int)loadMode;
-(int)dataCategory;
-(char)isCubeMap;
-(unsigned)nComponents;
-(int)texelFormat;
-(unsigned)internalFormat;
-(char)isPowerOfTwo;
-(char)isVerticalFlipped;
-(unsigned)bindTarget;
-(char)determinePVRFormat:(unsigned)arg1 ;
-(void*)alignmentFix:(unsigned)arg1 data:(const void*)arg2 ;
-(char)shouldApplyReorientToGL;
-(char)shouldApplyPremultiplication;
-(char)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long)arg2 andColorModel:(int)arg3 ;
-(char)decodeCGImageImageProvider:(CGImageRef)arg1 CGImageProvider:(CGImageProviderRef)arg2 ;
-(char)decodeCGImageDataProvider:(CGImageRef)arg1 ;
-(char)decodeCGImage:(CGImageRef)arg1 ;
-(char)canHonorSRGBrequest;
-(char)reorientToGL:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(char)premultiplyWithAlpha:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(char)_uploadToGLTexture:(unsigned)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id*)arg8 ;
-(unsigned)rowBytes;
-(id)initWithData:(id)arg1 forceCubeMap:(char)arg2 wasCubeMap:(char*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 forceCubeMap:(char)arg2 wasCubeMap:(char*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithDecodedData:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 rowBytes:(unsigned)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id*)arg8 ;
-(char)uploadToGLTexture:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned)GLTextureName;
-(void)setGLTextureName:(unsigned)arg1 ;
-(void)setBindTarget:(unsigned)arg1 ;
-(void)setInternalFormat:(unsigned)arg1 ;
-(void)setTexelFormat:(int)arg1 ;
-(unsigned)numMipMapLevels;
-(void)setNumMipMapLevels:(unsigned)arg1 ;
-(void)setRowBytes:(unsigned)arg1 ;
-(void)setNComponents:(unsigned)arg1 ;
-(unsigned)nPrimarySurfaces;
-(void)setNPrimarySurfaces:(unsigned)arg1 ;
-(unsigned)nSurfaces;
-(void)setNSurfaces:(unsigned)arg1 ;
-(void)setLoadMode:(int)arg1 ;
-(void)setDataCategory:(int)arg1 ;
-(char)hasPremultipliedAlpha;
-(void)setIsPowerOfTwo:(char)arg1 ;
-(void)setIsCubeMap:(char)arg1 ;
-(char)isMipmapped;
-(void)setIsMipmapped:(char)arg1 ;
-(void)setIsVerticalFlipped:(char)arg1 ;
-(char)reOrient;
-(void)setReOrient:(char)arg1 ;
-(NSData *)imageData;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(unsigned)textureTarget;
-(void)setTextureTarget:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOrientation:(unsigned)arg1 ;
-(unsigned)orientation;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(unsigned)width;
-(unsigned)height;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)index;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned)arg1 ;
-(void)setHasAlpha:(char)arg1 ;
-(char)hasAlpha;
@end

