/* Generated by RuntimeBrowser.
 */

@protocol TSKCompatibilityDelegate <NSObject>

@required

- (Class)exportOptionsControllerClass;
- (NSArray *)exportableTypes;
- (Class)exporterClassForType:(NSString *)arg1 options:(NSDictionary *)arg2;
- (Class)importerClassForType:(NSString *)arg1;
- (NSString *)indexXmlFilename;
- (bool)isSageDocumentType:(NSString *)arg1;
- (bool)isTCMessageExceptionErrorDomain:(NSString *)arg1;
- (NSString *)needNewerVersionIndexXmlContentString;
- (NSString *)nestedDocumentFilename;

@optional

- (NSString *)backwardsCompatibleTypeForType:(NSString *)arg1;
- (bool)isExportSupportedForType:(NSString *)arg1 documentRoot:(TSKDocumentRoot *)arg2;
- (NSString *)unsupportedExportMessageStringForType:(NSString *)arg1;

@end